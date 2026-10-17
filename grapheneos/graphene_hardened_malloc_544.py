"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 544."""

def spec_graphene_hardened_malloc_544() -> dict:
    return {"system": "GrapheneOS", "spec_id": 544, "quarantine_slabs": 1, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_544():
    s = spec_graphene_hardened_malloc_544()
    assert s["spec_id"] == 544
