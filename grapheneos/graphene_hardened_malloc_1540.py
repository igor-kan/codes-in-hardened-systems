"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 1540."""

def spec_graphene_hardened_malloc_1540() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1540, "quarantine_slabs": 5, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_1540():
    s = spec_graphene_hardened_malloc_1540()
    assert s["spec_id"] == 1540
