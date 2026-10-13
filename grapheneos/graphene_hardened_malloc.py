"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 160."""

def spec_graphene_hardened_malloc_160() -> dict:
    return {"system": "GrapheneOS", "spec_id": 160, "quarantine_slabs": 1, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_160():
    s = spec_graphene_hardened_malloc_160()
    assert s["spec_id"] == 160
